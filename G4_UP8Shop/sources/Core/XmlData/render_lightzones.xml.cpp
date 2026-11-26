#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/render_lightzones.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : render_lightzones_struct
void render_lightzones_struct::Init()
{
	base_struct::Init();

	// Field : PixelFormat
	PixelFormat = 0;

	// Field : width_divider
	width_divider = 0;

	// Field : height_divider
	height_divider = 0;

	// Field : width
	width = 0;

	// Field : height
	height_f = 0.0f;

	// Field : HasTextureAttachment
	HasTextureAttachment = 0;
	HasTextureAttachment_hash = 0;

	// Field : MinFilter
	MinFilter = 0;

	// Field : MagFilter
	MagFilter = 0;

	// Field : Wrap
	Wrap = 0;

	// Field : AttachmentType
	AttachmentType = 0;

	// Field : DiscardedAfterRender
	DiscardedAfterRender = 0;

	// Field : Attachments
	Attachments = 0;

	// Field : buffers
	buffers = 0;

}

void render_lightzones_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : PixelFormat
	stream->ReadAs(PixelFormat);

	// Field : width_divider
	stream->ReadAs(width_divider);

	// Field : height_divider
	stream->ReadAs(height_divider);

	// Field : width
	stream->ReadAs(width);

	// Field : height
	stream->ReadAs(height_f);

	// Field : HasTextureAttachment
	stream->ReadString(HasTextureAttachment);
	HasTextureAttachment_hash = static_cast<uint32>(glitch::core::hashString(HasTextureAttachment));

	// Field : MinFilter
	stream->ReadAs(MinFilter);

	// Field : MagFilter
	stream->ReadAs(MagFilter);

	// Field : Wrap
	stream->ReadAs(Wrap);

	// Field : AttachmentType
	stream->ReadAs(AttachmentType);

	// Field : DiscardedAfterRender
	stream->ReadAs(DiscardedAfterRender);

	// Field : Attachments
	stream->ReadAs(Attachments);

	// Field : buffers
	stream->ReadAs(buffers);

}

void render_lightzones_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : HasTextureAttachment
	if (HasTextureAttachment && HasTextureAttachment[0] != '\0') gll_delete[] HasTextureAttachment;
	HasTextureAttachment = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : render_lightzones
size_t render_lightzones::size = 0;
render_lightzones::struct_type* render_lightzones::entries = 0;

void render_lightzones::Load(StreamBase* stream)
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

void render_lightzones::Unload()
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

