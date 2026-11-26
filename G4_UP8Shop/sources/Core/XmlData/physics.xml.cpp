#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/physics.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : physics_struct
void physics_struct::Init()
{
	base_struct::Init();

	// Field : input
	input = 0;

	// Field : output
	output = 0;

	// Field : prefix
	prefix = 0;

	// Field : maximumSectionSize
	maximumSectionSize = 0;

	// Field : usePostProcess
	usePostProcess_f = 0.0f;

	// Field : postProcessDontSplitFiles
	postProcessDontSplitFiles = 0;
	postProcessDontSplitFiles_hash = 0;

}

void physics_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : input
	stream->ReadAs(input);

	// Field : output
	stream->ReadAs(output);

	// Field : prefix
	stream->ReadAs(prefix);

	// Field : maximumSectionSize
	stream->ReadAs(maximumSectionSize);

	// Field : usePostProcess
	stream->ReadAs(usePostProcess_f);

	// Field : postProcessDontSplitFiles
	stream->ReadString(postProcessDontSplitFiles);
	postProcessDontSplitFiles_hash = static_cast<uint32>(glitch::core::hashString(postProcessDontSplitFiles));

}

void physics_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : postProcessDontSplitFiles
	if (postProcessDontSplitFiles && postProcessDontSplitFiles[0] != '\0') gll_delete[] postProcessDontSplitFiles;
	postProcessDontSplitFiles = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : physics
size_t physics::size = 0;
physics::struct_type* physics::entries = 0;

void physics::Load(StreamBase* stream)
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

void physics::Unload()
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

