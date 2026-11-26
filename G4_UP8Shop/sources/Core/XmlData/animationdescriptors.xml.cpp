#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/animationdescriptors.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : animationdescriptors_struct
void animationdescriptors_struct::Init()
{
	base_struct::Init();

	// Field : reportVertexFile
	reportVertexFile = 0;
	reportVertexFile_hash = 0;

	// Field : inputFolder
	inputFolder = 0;

	// Field : reportVertexHighWatermark
	reportVertexHighWatermark = 0;

	// Field : outputFolder
	outputFolder = 0;

	// Field : textureFolder
	textureFolder = 0;
	textureFolder_hash = 0;

	// Field : cityTextureFolder
	cityTextureFolder = 0;
	cityTextureFolder_hash = 0;

	// Field : shaderPak
	shaderPak = 0;

	// Field : havokFolder
	havokFolder = 0;

	// Field : tmpFolder
	tmpFolder = 0;

	// Field : inputFile
	inputFile = 0;
	inputFile_hash = 0;

	// Field : outputFile
	outputFile = 0;
	outputFile_hash = 0;

	// Field : defaultEffects
	defaultEffects = 0;

	// Field : customEffects
	customEffects = 0;

}

void animationdescriptors_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : reportVertexFile
	stream->ReadString(reportVertexFile);
	reportVertexFile_hash = static_cast<uint32>(glitch::core::hashString(reportVertexFile));

	// Field : inputFolder
	stream->ReadAs(inputFolder);

	// Field : reportVertexHighWatermark
	stream->ReadAs(reportVertexHighWatermark);

	// Field : outputFolder
	stream->ReadAs(outputFolder);

	// Field : textureFolder
	stream->ReadString(textureFolder);
	textureFolder_hash = static_cast<uint32>(glitch::core::hashString(textureFolder));

	// Field : cityTextureFolder
	stream->ReadString(cityTextureFolder);
	cityTextureFolder_hash = static_cast<uint32>(glitch::core::hashString(cityTextureFolder));

	// Field : shaderPak
	stream->ReadAs(shaderPak);

	// Field : havokFolder
	stream->ReadAs(havokFolder);

	// Field : tmpFolder
	stream->ReadAs(tmpFolder);

	// Field : inputFile
	stream->ReadString(inputFile);
	inputFile_hash = static_cast<uint32>(glitch::core::hashString(inputFile));

	// Field : outputFile
	stream->ReadString(outputFile);
	outputFile_hash = static_cast<uint32>(glitch::core::hashString(outputFile));

	// Field : defaultEffects
	stream->ReadAs(defaultEffects);

	// Field : customEffects
	stream->ReadAs(customEffects);

}

void animationdescriptors_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : reportVertexFile
	if (reportVertexFile && reportVertexFile[0] != '\0') gll_delete[] reportVertexFile;
	reportVertexFile = 0;

	// Field : textureFolder
	if (textureFolder && textureFolder[0] != '\0') gll_delete[] textureFolder;
	textureFolder = 0;

	// Field : cityTextureFolder
	if (cityTextureFolder && cityTextureFolder[0] != '\0') gll_delete[] cityTextureFolder;
	cityTextureFolder = 0;

	// Field : inputFile
	if (inputFile && inputFile[0] != '\0') gll_delete[] inputFile;
	inputFile = 0;

	// Field : outputFile
	if (outputFile && outputFile[0] != '\0') gll_delete[] outputFile;
	outputFile = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : animationdescriptors
size_t animationdescriptors::size = 0;
animationdescriptors::struct_type* animationdescriptors::entries = 0;

void animationdescriptors::Load(StreamBase* stream)
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

void animationdescriptors::Unload()
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

