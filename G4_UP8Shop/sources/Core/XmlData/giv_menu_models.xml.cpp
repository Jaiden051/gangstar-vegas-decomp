#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_menu_models.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_menu_models_struct
void giv_menu_models_struct::Init()
{
	base_struct::Init();

	// Field : ISOCode
	ISOCode = 0;

	// Field : Typeface
	Typeface = 0;

	// Field : Language
	Language = 0;

	// Field : SymbolsUtfHtmlCode
	SymbolsUtfHtmlCode = 0;

	// Field : styleNone
	styleNone = 0;

	// Field : styleBold
	styleBold = 0;

	// Field : styleItalic
	styleItalic = 0;

	// Field : styleBoldItalic
	styleBoldItalic = 0;

	// Field : faceIndex
	faceIndex = 0;

	// Field : script
	script = 0;

}

void giv_menu_models_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : ISOCode
	stream->ReadAs(ISOCode);

	// Field : Typeface
	stream->ReadAs(Typeface);

	// Field : Language
	stream->ReadAs(Language);

	// Field : SymbolsUtfHtmlCode
	stream->ReadAs(SymbolsUtfHtmlCode);

	// Field : styleNone
	stream->ReadAs(styleNone);

	// Field : styleBold
	stream->ReadAs(styleBold);

	// Field : styleItalic
	stream->ReadAs(styleItalic);

	// Field : styleBoldItalic
	stream->ReadAs(styleBoldItalic);

	// Field : faceIndex
	stream->ReadAs(faceIndex);

	// Field : script
	stream->ReadAs(script);

}

void giv_menu_models_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_menu_models
size_t giv_menu_models::size = 0;
giv_menu_models::struct_type* giv_menu_models::entries = 0;

void giv_menu_models::Load(StreamBase* stream)
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

void giv_menu_models::Unload()
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

