#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_online_iap.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_online_iap_struct
void giv_online_iap_struct::Init()
{
	base_struct::Init();

	// Field : CategoryTitle
	CategoryTitle = 0;
	CategoryTitle_hash = 0;

	// Field : Category
	Category = 0;

	// Field : LookUpStringTitle
	LookUpStringTitle = 0;
	LookUpStringTitle_hash = 0;

	// Field : LookUpStringContent
	LookUpStringContent = 0;
	LookUpStringContent_hash = 0;

}

void giv_online_iap_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : CategoryTitle
	stream->ReadString(CategoryTitle);
	CategoryTitle_hash = static_cast<uint32>(glitch::core::hashString(CategoryTitle));

	// Field : Category
	stream->ReadAs(Category);

	// Field : LookUpStringTitle
	stream->ReadString(LookUpStringTitle);
	LookUpStringTitle_hash = static_cast<uint32>(glitch::core::hashString(LookUpStringTitle));

	// Field : LookUpStringContent
	stream->ReadString(LookUpStringContent);
	LookUpStringContent_hash = static_cast<uint32>(glitch::core::hashString(LookUpStringContent));

}

void giv_online_iap_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : CategoryTitle
	if (CategoryTitle && CategoryTitle[0] != '\0') gll_delete[] CategoryTitle;
	CategoryTitle = 0;

	// Field : LookUpStringTitle
	if (LookUpStringTitle && LookUpStringTitle[0] != '\0') gll_delete[] LookUpStringTitle;
	LookUpStringTitle = 0;

	// Field : LookUpStringContent
	if (LookUpStringContent && LookUpStringContent[0] != '\0') gll_delete[] LookUpStringContent;
	LookUpStringContent = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_online_iap
size_t giv_online_iap::size = 0;
giv_online_iap::struct_type* giv_online_iap::entries = 0;

void giv_online_iap::Load(StreamBase* stream)
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

void giv_online_iap::Unload()
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

