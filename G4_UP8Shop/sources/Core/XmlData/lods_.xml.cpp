#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/lods_.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : lods__struct
void lods__struct::Init()
{
	base_struct::Init();

	// Field : BdaeFile
	BdaeFile = 0;
	BdaeFile_hash = 0;

	// Field : GlobalParameterName
	GlobalParameterName = 0;
	GlobalParameterName_hash = 0;

	// Field : imageFile
	imageFile = 0;
	imageFile_hash = 0;

	// Field : wrap
	wrap = 0;

}

void lods__struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : BdaeFile
	stream->ReadString(BdaeFile);
	BdaeFile_hash = static_cast<uint32>(glitch::core::hashString(BdaeFile));

	// Field : GlobalParameterName
	stream->ReadString(GlobalParameterName);
	GlobalParameterName_hash = static_cast<uint32>(glitch::core::hashString(GlobalParameterName));

	// Field : imageFile
	stream->ReadString(imageFile);
	imageFile_hash = static_cast<uint32>(glitch::core::hashString(imageFile));

	// Field : wrap
	stream->ReadAs(wrap);

}

void lods__struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : BdaeFile
	if (BdaeFile && BdaeFile[0] != '\0') gll_delete[] BdaeFile;
	BdaeFile = 0;

	// Field : GlobalParameterName
	if (GlobalParameterName && GlobalParameterName[0] != '\0') gll_delete[] GlobalParameterName;
	GlobalParameterName = 0;

	// Field : imageFile
	if (imageFile && imageFile[0] != '\0') gll_delete[] imageFile;
	imageFile = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : lods_
size_t lods_::size = 0;
lods_::struct_type* lods_::entries = 0;

void lods_::Load(StreamBase* stream)
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

void lods_::Unload()
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

